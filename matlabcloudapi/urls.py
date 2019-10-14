from django.contrib import admin
from django.urls import path
from django.conf.urls import url, include
from django.contrib.auth import views as auth_views
from rest_framework import routers
from api.views import search

router_search = routers.DefaultRouter()
router_search.register(r'api', search,base_name='base')



urlpatterns = [
    path('admin/', admin.site.urls),
]

urlpatterns += router_search.urls
