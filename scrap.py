import requests
from bs4 import BeautifulSoup
import time
import random
import re

def get_html(url):
    try:
        headers = {'User-Agent': 'Your User Agent String'}  # Set your user agent
        response = requests.get(url, headers=headers)
        response.raise_for_status()
        return response.content
    except requests.exceptions.HTTPError as errh:
        print(f"HTTP Error: {errh}")
    except requests.exceptions.RequestException as err:
        print(f"Request Exception: {err}")
    return None

def scrape_data(html_content):
    if html_content:
        soup = BeautifulSoup(html_content, 'html.parser')
        
        # Extract data based on HTML structure using Beautiful Soup
        # Example: extracting all links on the page
        links = soup.find_all('a')
        print(links)
        # for link in links:
        #     print(link.get('href'))

def main():
    base_url = 'https://sataradiary.com/sat'
    
    for page_number in range(1, 6):  # Scraping data from multiple pages
        url = f'{base_url}/page/{page_number}'
        
        html_content = get_html(url)
        if html_content:
            scrape_data(html_content)
            
        # Introduce a random delay to avoid being too aggressive
        time.sleep(random.uniform(1, 3))

if __name__ == "__main__":
    main()
