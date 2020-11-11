/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface PKSharedAppletSubcredentialsManifest : NSObject {

	NSString* _identifier;
	NSString* _version;
	NSDictionary* _items;

}

@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSDictionary * items;                       //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSDictionary * sanitizedItems; 
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)version;
-(NSDictionary *)items;
-(NSDictionary *)sanitizedItems;
@end
