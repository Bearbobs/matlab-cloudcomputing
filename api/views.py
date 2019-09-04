from django.shortcuts import render
from rest_framework import viewsets
from django.http import JsonResponse
from django.core import serializers
from collections import ChainMap
import requests
import json
import re



class search(viewsets.ViewSet):
    def list(self, request):
        if request.method == 'GET':

            q = self.request.query_params.get('data')

            
            return JsonResponse("Received:"+q, safe=False)
