/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:07:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FBSApplicationTrustDataProvider.h>

@protocol OS_dispatch_queue;
@class FBSApplicationInfo, NSArray, NSObject, NSString;

@interface FBSLegacySignatureValidationService : NSObject <FBSApplicationTrustDataProvider> {

	FBSApplicationInfo* _appInfo;
	BOOL _hasUniversalProvisioningProfile;
	BOOL _hasFreeDeveloperProvisioningProfile;
	BOOL _isManaged;
	NSArray* _provisioningProfiles;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)trustStateForApplication:(id)arg1 ;
-(void)_initializeProfiles:(id)arg1 ;
-(id)_workQueue_expirationDateForProvisioningProfile;
-(BOOL)_workQueue_signatureNeedsExplicitUserTrust;
-(id)initWithApplicationInfo:(id)arg1 andProvisioningProfiles:(id)arg2 isManaged:(BOOL)arg3 ;
@end

