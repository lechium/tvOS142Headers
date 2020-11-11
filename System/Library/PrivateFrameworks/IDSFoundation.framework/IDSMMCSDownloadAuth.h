/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData, NSString;

@interface IDSMMCSDownloadAuth : NSObject <NSCopying> {

	NSDictionary* _dictionaryRepresentation;

}

@property (nonatomic,readonly) NSData * signature; 
@property (nonatomic,readonly) NSString * authURL; 
@property (nonatomic,readonly) NSString * ownerID; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation;              //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)signature;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithSignature:(id)arg1 authURL:(id)arg2 ownerID:(id)arg3 ;
-(NSString *)authURL;
-(NSString *)ownerID;
@end

