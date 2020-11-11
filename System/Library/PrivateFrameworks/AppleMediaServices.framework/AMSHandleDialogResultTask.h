/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;
@class ACAccount, AMSProcessInfo, NSString, AMSDialogResult, NSError, AMSDialogRequest;

@interface AMSHandleDialogResultTask : AMSTask {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	AMSProcessInfo* _clientInfo;
	NSString* _proxyBundleId;
	AMSDialogResult* _result;
	NSError* _error;

}

@property (nonatomic,copy) ACAccount * account;                         //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                  //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;               //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,copy) NSString * proxyBundleId;                    //@synthesize proxyBundleId=_proxyBundleId - In the implementation block
@property (nonatomic,readonly) AMSDialogRequest * request; 
@property (nonatomic,readonly) AMSDialogResult * result;                //@synthesize result=_result - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(AMSDialogRequest *)request;
-(AMSDialogResult *)result;
-(AMSProcessInfo *)clientInfo;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)perform;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(id)initWithRequest:(id)arg1 result:(id)arg2 error:(id)arg3 bag:(id)arg4 ;
-(id)initWithResult:(id)arg1 bag:(id)arg2 ;
-(void)setProxyBundleId:(NSString *)arg1 ;
-(id)_handleAskPermissionRequestWithURL:(id)arg1 account:(id)arg2 ;
-(NSString *)proxyBundleId;
@end

