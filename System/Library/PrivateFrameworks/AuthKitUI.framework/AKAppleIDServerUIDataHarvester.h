/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSDictionary;

@interface AKAppleIDServerUIDataHarvester : NSObject {

	NSMutableDictionary* _harvestedData;

}

@property (nonatomic,copy,readonly) NSDictionary * harvestedData; 
-(id)init;
-(void)harvestDataFromServerUIObjectModel:(id)arg1 ;
-(NSDictionary *)harvestedData;
-(void)harvestDataFromServerHTTPResponse:(id)arg1 ;
-(void)_harvestDataFromClientInfo:(id)arg1 withExtractor:(id)arg2 ;
-(void)harvestIDMSRecoveryInfoFromClientInfo:(id)arg1 ;
-(void)_harvestIDMSRecoveryHeadersInfo:(id)arg1 ;
-(void)harvestIDMSRecoveryInfoFromHeaders:(id)arg1 ;
-(void)harvestDataFromCompanionResponse:(id)arg1 ;
@end
