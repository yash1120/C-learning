import requests
import os
import json

# To set your environment variables in your terminal run the following line:
# export 'BEARER_TOKEN'='<your_bearer_token>'
bearer_token = 'AAAAAAAAAAAAAAAAAAAAADvYYwEAAAAA6zNs3T701eVsupvVyRwIj3AaroI%3D3uFEOHZz1obQmuZO5h1oYmG36aW9bHsj6FU5B2rLvMLqoOse2W'


search_url ="https://api.twitter.com/2/tweets/search/recent"

# Optional params: start_time,end_time,since_id,until_id,max_results,next_token,
# expansions,tweet.fields,media.fields,poll.fields,place.fields,user.fields
query_params = {'query': '#bitcoin','tweet.fields': 'author_id','max_results':'10'}


def bearer_oauth(r):
    """
    Method required by bearer token authentication.
    """

    r.headers["Authorization"] = f"Bearer {bearer_token}"
    r.headers["User-Agent"] = "v2FullArchiveSearchPython"
    return r


def connect_to_endpoint(url, params):
    response = requests.request("GET", search_url, auth=bearer_oauth, params=params)
    print(response.status_code)
    if response.status_code != 200:
        raise Exception(response.status_code, response.text)
    return response.json()


def main():
    json_response = connect_to_endpoint(search_url, query_params)
    data = json.dumps(json_response, indent=4, sort_keys=True)
    print(data)
    import pandas as pd 
    print(pd.DataFrame(pd.DataFrame(json_response['data']).text))

if __name__ == "__main__":
    main()
