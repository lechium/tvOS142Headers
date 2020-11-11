/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SyncedDefaults/SyncedDefaults-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYDStoreID, NSString;

@interface SYDStoreConfiguration : NSObject <NSSecureCoding, NSCopying> {

	SYDStoreID* _storeID;
	NSString* _personaUniqueString;

}

@property (nonatomic,retain) SYDStoreID * storeID;                      //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy) NSString * personaUniqueString;              //@synthesize personaUniqueString=_personaUniqueString - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)personaUniqueString;
-(void)setPersonaUniqueString:(NSString *)arg1 ;
-(SYDStoreID *)storeID;
-(void)setStoreID:(SYDStoreID *)arg1 ;
-(id)initWithStoreID:(id)arg1 ;
@end

