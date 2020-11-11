/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ML3AccountInformationProviding.h>

@class NSString, ACAccount;

@interface ML3AccountStore : NSObject <ML3AccountInformationProviding>

@property (nonatomic,readonly) ACAccount * activeAccount; 
@property (nonatomic,copy,readonly) NSString * accountDSID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultStore;
-(id)_init;
-(ACAccount *)activeAccount;
-(NSString *)accountDSID;
-(id)_accountsWithAccountTypeIdentifier:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)altDSIDForAccountWithDSID:(long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
@end

