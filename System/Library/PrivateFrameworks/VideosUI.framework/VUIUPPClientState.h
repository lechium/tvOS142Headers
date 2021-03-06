/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSString;

@interface VUIUPPClientState : NSObject {

	NSMutableDictionary* _pendingChanges;
	NSMutableDictionary* _uppKeyToRecordMap;
	NSString* _lastSyncedDomainVersion;

}

@property (nonatomic,readonly) NSMutableDictionary * pendingChanges;                 //@synthesize pendingChanges=_pendingChanges - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * uppKeyToRecordMap;              //@synthesize uppKeyToRecordMap=_uppKeyToRecordMap - In the implementation block
@property (copy) NSString * lastSyncedDomainVersion;                                 //@synthesize lastSyncedDomainVersion=_lastSyncedDomainVersion - In the implementation block
-(id)init;
-(NSMutableDictionary *)pendingChanges;
-(NSString *)lastSyncedDomainVersion;
-(NSMutableDictionary *)uppKeyToRecordMap;
-(void)setLastSyncedDomainVersion:(NSString *)arg1 ;
@end

