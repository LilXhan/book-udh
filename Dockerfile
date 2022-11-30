FROM python:3.11

WORKDIR /app

COPY requirements.txt /app/requirements.txt

RUN pip install --upgrade --no-cache-dir -r /app/requirements.txt 

COPY . /app

EXPOSE 5000