/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSNumber, NSArray, NSDictionary;

@interface EDAMNoteLockStatus : FATObject {

	NSNumber* _noteUpdateSequenceNumber;
	NSNumber* _lockHolderUserId;
	NSNumber* _lockRenewBy;
	NSArray* _viewingUserIds;
	NSNumber* _viewIdleExpiration;
	NSDictionary* _unknownUsers;
	NSNumber* _currentTime;

}

@property (nonatomic,retain) NSNumber * noteUpdateSequenceNumber;              //@synthesize noteUpdateSequenceNumber=_noteUpdateSequenceNumber - In the implementation block
@property (nonatomic,retain) NSNumber * lockHolderUserId;                      //@synthesize lockHolderUserId=_lockHolderUserId - In the implementation block
@property (nonatomic,retain) NSNumber * lockRenewBy;                           //@synthesize lockRenewBy=_lockRenewBy - In the implementation block
@property (nonatomic,retain) NSArray * viewingUserIds;                         //@synthesize viewingUserIds=_viewingUserIds - In the implementation block
@property (nonatomic,retain) NSNumber * viewIdleExpiration;                    //@synthesize viewIdleExpiration=_viewIdleExpiration - In the implementation block
@property (nonatomic,retain) NSDictionary * unknownUsers;                      //@synthesize unknownUsers=_unknownUsers - In the implementation block
@property (nonatomic,retain) NSNumber * currentTime;                           //@synthesize currentTime=_currentTime - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)currentTime;
-(void)setCurrentTime:(NSNumber *)arg1 ;
-(NSNumber *)noteUpdateSequenceNumber;
-(void)setNoteUpdateSequenceNumber:(NSNumber *)arg1 ;
-(NSNumber *)lockHolderUserId;
-(void)setLockHolderUserId:(NSNumber *)arg1 ;
-(NSNumber *)lockRenewBy;
-(void)setLockRenewBy:(NSNumber *)arg1 ;
-(NSArray *)viewingUserIds;
-(void)setViewingUserIds:(NSArray *)arg1 ;
-(NSNumber *)viewIdleExpiration;
-(void)setViewIdleExpiration:(NSNumber *)arg1 ;
-(NSDictionary *)unknownUsers;
-(void)setUnknownUsers:(NSDictionary *)arg1 ;
@end
