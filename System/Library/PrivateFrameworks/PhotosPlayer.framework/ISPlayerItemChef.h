/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class NSOperationQueue, NSObject, NSMutableDictionary;

@interface ISPlayerItemChef : NSObject {

	NSOperationQueue* __operationQueue;
	NSObject*<OS_dispatch_queue> __isolationQueue;
	NSMutableDictionary* __operationsByRequestID;
	long long __currentRequestID;

}

@property (nonatomic,readonly) NSOperationQueue * _operationQueue;                                  //@synthesize _operationQueue=__operationQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _isolationQueue;                        //@synthesize _isolationQueue=__isolationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _operationsByRequestID;                        //@synthesize _operationsByRequestID=__operationsByRequestID - In the implementation block
@property (assign,setter=_setCurrentRequestID:,nonatomic) long long _currentRequestID;              //@synthesize _currentRequestID=__currentRequestID - In the implementation block
+(id)defaultChef;
-(id)init;
-(NSOperationQueue *)_operationQueue;
-(NSObject*<OS_dispatch_queue>)_isolationQueue;
-(long long)_currentRequestID;
-(long long)prepareIrisVideoWithAsset:(id)arg1 photoTime:(SCD_Struct_IS1)arg2 trimmedTimeRange:(SCD_Struct_IS8)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancelPreparationOfIrisAssetWithRequestID:(long long)arg1 ;
-(long long)prepareIrisPlayerItemWithAsset:(id)arg1 trimmedTimeRange:(SCD_Struct_IS8)arg2 photoTime:(SCD_Struct_IS1)arg3 includeVideo:(BOOL)arg4 includeAudio:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(NSMutableDictionary *)_operationsByRequestID;
-(void)_setCurrentRequestID:(long long)arg1 ;
@end

