from django_eventstream.channelmanager import DefaultChannelManager

class MyChannelManager(DefaultChannelManager):
    def can_read_channel(self, user, channel):
        # require auth for prefixed channels
        if channel.startswith('_') and user is None:
            return False
        return True