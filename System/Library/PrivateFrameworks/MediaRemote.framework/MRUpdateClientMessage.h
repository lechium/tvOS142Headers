/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class MRClient;

@interface MRUpdateClientMessage : MRProtocolMessage

@property (nonatomic,readonly) MRClient * client; 
-(unsigned long long)type;
-(MRClient *)client;
-(id)initWithClient:(id)arg1 ;
@end
