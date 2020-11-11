/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFSyncHandler.h>

@class NSMutableDictionary, NSString;

@interface POPodcastSyncHandler : NSObject <AFSyncHandler> {

	NSMutableDictionary* _anchorToRevision;

}

@property (nonatomic,retain) NSMutableDictionary * anchorToRevision;              //@synthesize anchorToRevision=_anchorToRevision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)validity;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)syncDidEnd;
-(void)setAnchorToRevision:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)anchorToRevision;
@end

