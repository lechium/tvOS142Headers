/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class NSDate;

@interface MROriginClientPropertiesMessage : MRProtocolMessage

@property (nonatomic,readonly) NSDate * lastPlayingDate; 
-(unsigned long long)type;
-(NSDate *)lastPlayingDate;
-(id)initWithLastPlayingDate:(id)arg1 ;
@end

