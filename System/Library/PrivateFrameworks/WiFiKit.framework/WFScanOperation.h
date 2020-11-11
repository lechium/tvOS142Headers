/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WFOperation.h>

@class NSString, WFScanRequest, NSMutableSet, NSDictionary, NSSet;

@interface WFScanOperation : WFOperation {

	NSString* _targetSSID;
	WFScanRequest* _request;
	NSMutableSet* _scanResults;
	NSDictionary* _scanParameters;

}

@property (nonatomic,retain) NSMutableSet * scanResults;                 //@synthesize scanResults=_scanResults - In the implementation block
@property (nonatomic,retain) WFScanRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSDictionary * scanParameters;              //@synthesize scanParameters=_scanParameters - In the implementation block
@property (nonatomic,readonly) NSSet * results; 
@property (nonatomic,copy) NSString * targetSSID;                        //@synthesize targetSSID=_targetSSID - In the implementation block
-(id)description;
-(WFScanRequest *)request;
-(void)cancel;
-(void)start;
-(NSSet *)results;
-(void)finish;
-(void)setRequest:(WFScanRequest *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(NSDictionary *)scanParameters;
-(void)scanDidFinishWithResults:(id)arg1 error:(int)arg2 ;
-(void)setScanResults:(NSMutableSet *)arg1 ;
-(NSMutableSet *)scanResults;
-(NSString *)targetSSID;
-(void)setTargetSSID:(NSString *)arg1 ;
-(void)setScanParameters:(NSDictionary *)arg1 ;
@end

