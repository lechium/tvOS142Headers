/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLCredentialStorageInternal, NSDictionary;

@interface NSURLCredentialStorage : NSObject {

	NSURLCredentialStorageInternal* _internal;

}

@property (assign,nonatomic) BOOL _useSystemKeychain; 
@property (copy,readonly) NSDictionary * allCredentials; 
+(id)sharedCredentialStorage;
-(id)init;
-(void)dealloc;
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3 ;
-(void)getDefaultCredentialForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getCredentialsForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSDictionary *)allCredentials;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 task:(id)arg4 ;
-(void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(id)defaultCredentialForProtectionSpace:(id)arg1 ;
-(void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(id)credentialsForProtectionSpace:(id)arg1 ;
-(id)_initWithCFURLCredentialStorage:(CFURLCredentialStorageRef)arg1 ;
-(CFURLCredentialStorageRef)_CFURLCredentialStorage;
-(BOOL)_useSystemKeychain;
-(void)set_useSystemKeychain:(BOOL)arg1 ;
-(id)_allCredentialsWithAccessControlGroup:(id)arg1 includeLegacyKeychain:(BOOL)arg2 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 ;
@end

