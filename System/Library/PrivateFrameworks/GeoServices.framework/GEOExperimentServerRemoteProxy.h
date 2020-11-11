/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOExperimentServerProxy.h>

@protocol GEOExperimentServerProxyDelegate;
@class GEOABAssignmentResponse, NSString;

@interface GEOExperimentServerRemoteProxy : NSObject <GEOExperimentServerProxy> {

	id<GEOExperimentServerProxyDelegate> _delegate;
	GEOABAssignmentResponse* _experimentsInfo;
	os_unfair_lock_s _experimentsInfoLock;
	int _experimentsChangedToken;

}

@property (assign,nonatomic,__weak) id<GEOExperimentServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) GEOABAssignmentResponse * experimentsInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<GEOExperimentServerProxyDelegate>)delegate;
-(void)setDelegate:(id<GEOExperimentServerProxyDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)abAssignUUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)forceUpdate;
-(void)refreshDatasetABStatus:(id)arg1 ;
-(GEOABAssignmentResponse *)experimentsInfo;
-(void)abAssignUUIDWithSyncCompletionHandler:(/*^block*/id)arg1 ;
-(void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3 ;
-(void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1 ;
-(void)_debug_setBucketIdDictionaryRepresentation:(id)arg1 ;
-(void)_debug_fetchAllAvailableExperiments:(/*^block*/id)arg1 ;
@end

