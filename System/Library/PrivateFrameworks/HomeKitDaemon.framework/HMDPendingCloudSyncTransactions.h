/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSMutableArray, HMDHomeManager, NSArray;

@interface HMDPendingCloudSyncTransactions : HMFObject {

	BOOL _uploadInProgress;
	NSMutableArray* _pendingReasonsSaved;
	NSMutableArray* _deltaReasonsSaved;
	HMDHomeManager* _homeManager;

}

@property (assign,nonatomic) BOOL uploadInProgress;                              //@synthesize uploadInProgress=_uploadInProgress - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingReasonsSaved;               //@synthesize pendingReasonsSaved=_pendingReasonsSaved - In the implementation block
@property (nonatomic,retain) NSMutableArray * deltaReasonsSaved;                 //@synthesize deltaReasonsSaved=_deltaReasonsSaved - In the implementation block
@property (nonatomic,__weak,readonly) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) NSArray * reasonsSaved; 
@property (nonatomic,readonly) NSArray * allReasonsSaved; 
+(id)convertSaveReasonToTransationReason:(id)arg1 ;
-(id)init;
-(void)reset;
-(HMDHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(void)setUploadInProgress:(BOOL)arg1 ;
-(NSMutableArray *)pendingReasonsSaved;
-(NSMutableArray *)deltaReasonsSaved;
-(void)_addReasonSaved:(id)arg1 information:(id)arg2 ;
-(BOOL)uploadInProgress;
-(void)startUpload;
-(void)stopUploadAndClean;
-(void)stopUploadAndResume;
-(void)addReasonSaved:(id)arg1 information:(id)arg2 ;
-(void)loadReasonsSaved:(id)arg1 ;
-(NSArray *)reasonsSaved;
-(NSArray *)allReasonsSaved;
-(void)setPendingReasonsSaved:(NSMutableArray *)arg1 ;
-(void)setDeltaReasonsSaved:(NSMutableArray *)arg1 ;
@end

