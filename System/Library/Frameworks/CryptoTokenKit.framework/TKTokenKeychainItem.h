/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSString, NSDictionary, TKTokenID, NSMutableDictionary;

@interface TKTokenKeychainItem : NSObject {

	NSData* _accessControl;
	id _objectID;
	NSString* _label;
	NSDictionary* _constraints;
	TKTokenID* _tokenID;

}

@property (copy,readonly) NSMutableDictionary * keychainAttributes; 
@property (copy,readonly) NSData * encodedObjectID; 
@property (retain) TKTokenID * tokenID;                                          //@synthesize tokenID=_tokenID - In the implementation block
@property (retain) NSData * accessControl; 
@property (copy,readonly) id objectID;                                           //@synthesize objectID=_objectID - In the implementation block
@property (copy) NSString * label;                                               //@synthesize label=_label - In the implementation block
@property (copy) NSDictionary * constraints;                                     //@synthesize constraints=_constraints - In the implementation block
+(id)keychainItemWithInfo:(id)arg1 ;
+(id)operationMap;
+(id)accessControlForConstraints:(id)arg1 tokenID:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(NSData *)accessControl;
-(NSMutableDictionary *)keychainAttributes;
-(id)objectID;
-(TKTokenID *)tokenID;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithObjectID:(id)arg1 ;
-(NSDictionary *)constraints;
-(void)setConstraints:(NSDictionary *)arg1 ;
-(void)setTokenID:(TKTokenID *)arg1 ;
-(void)setAccessControl:(NSData *)arg1 ;
-(id)initWithItemInfo:(id)arg1 ;
@end

