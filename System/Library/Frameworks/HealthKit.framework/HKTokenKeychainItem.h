/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface HKTokenKeychainItem : NSObject {

	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)_fetchTokenIdentifiedByName:(id)arg1 error:(id*)arg2 ;
+(BOOL)_storeTokenIdentifiedByName:(id)arg1 data:(id)arg2 error:(out id*)arg3 ;
+(BOOL)_deleteTokenIdentifiedByName:(id)arg1 error:(out id*)arg2 ;
+(id)tokenKeychainItemSecurityClass;
+(id)_identifyingAttributesForKeyIdentifiedByName:(id)arg1 ;
+(id)_keyQueryAttributesForKeyIdentifiedByName:(id)arg1 ;
+(id)_storableAttributesForKeyIdentifiedByName:(id)arg1 data:(id)arg2 modificationDate:(id)arg3 ;
-(NSString *)name;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(BOOL)deleteWithError:(id*)arg1 ;
-(id)fetchWithError:(id*)arg1 ;
-(BOOL)storeToken:(id)arg1 error:(id*)arg2 ;
@end

