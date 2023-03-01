import requests

url = "https://jsonplaceholder.typicode.com/posts/1"

response = requests.get(url)

response_json = response.json()
print(response_json["title"])