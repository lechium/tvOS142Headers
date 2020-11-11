/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputContextCommunicationChannelImpl.h>

@class AVOutputContextCommunicationChannel, NSString;

@interface AVFigCommChannelUUIDOutputContextCommunicationChannelImpl : NSObject <AVOutputContextCommunicationChannelImpl> {

	AVOutputContextCommunicationChannel* _parentChannel;
	OpaqueFigRoutingContextRef _routingContext;
	CFStringRef _commChannelUUID;

}

@property (nonatomic,readonly) CFStringRef commChannelUUID;                                       //@synthesize commChannelUUID=_commChannelUUID - In the implementation block
@property (__weak) AVOutputContextCommunicationChannel * parentCommunicationChannel;              //@synthesize parentChannel=_parentChannel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setParentCommunicationChannel:(AVOutputContextCommunicationChannel *)arg1 ;
-(id)initWithRoutingContext:(OpaqueFigRoutingContextRef)arg1 commChannelUUID:(CFStringRef)arg2 ;
-(AVOutputContextCommunicationChannel *)parentCommunicationChannel;
-(CFStringRef)commChannelUUID;
@end

