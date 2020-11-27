from channels.routing import ProtocolTypeRouter, URLRouter
import stream.routing

application = ProtocolTypeRouter({
    'http': URLRouter(stream.routing.urlpatterns),
})