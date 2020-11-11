/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_TtP11AppStoreKitP33_8FC66B30E604F9835E1C3CBA5211B91519JSUserObjectExports_.h>

@class NSString, NSNumber;

@interface AppStoreKit.JSUserObject : NSObject <_TtP11AppStoreKitP33_8FC66B30E604F9835E1C3CBA5211B91519JSUserObjectExports_> {

	 accounts;

}

@property (readonly,nonatomic) NSString * firstName; 
@property (readonly,nonatomic) NSString * lastName; 
@property (readonly,nonatomic) NSString * accountIdentifier; 
@property (readonly,nonatomic) NSString * dsid; 
@property (readonly,nonatomic) BOOL isManagedAppleID; 
@property (readonly,nonatomic) BOOL isUnderThirteen; 
@property (readonly,nonatomic) NSNumber * userAgeIfAvailable; 
-(id)init;
-(NSString *)dsid;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)accountIdentifier;
-(BOOL)isManagedAppleID;
-(BOOL)isUnderThirteen;
-(NSNumber *)userAgeIfAvailable;
-(id)cookiesForUrl:(id)arg1 ;
-(id)cookieForUrlWithName:(id)arg1 :(id)arg2 ;
@end

