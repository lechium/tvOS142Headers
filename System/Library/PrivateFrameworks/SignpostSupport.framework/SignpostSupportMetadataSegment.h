/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, SignpostSupportMessageArgument;

@interface SignpostSupportMetadataSegment : NSObject {

	NSString* _typeNamespace;
	NSString* _type;
	NSArray* _placeholderTokens;
	NSString* _stringPrefix;
	SignpostSupportMessageArgument* _argument;

}

@property (nonatomic,readonly) NSString * typeNamespace;                               //@synthesize typeNamespace=_typeNamespace - In the implementation block
@property (nonatomic,readonly) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * placeholderTokens;                            //@synthesize placeholderTokens=_placeholderTokens - In the implementation block
@property (nonatomic,readonly) NSString * stringPrefix;                                //@synthesize stringPrefix=_stringPrefix - In the implementation block
@property (nonatomic,readonly) SignpostSupportMessageArgument * argument;              //@synthesize argument=_argument - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
-(SignpostSupportMessageArgument *)argument;
-(NSString *)typeNamespace;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2 didRedactOut:(BOOL*)arg3 ;
-(NSArray *)placeholderTokens;
-(NSString *)stringPrefix;
-(id)initWithArgumentObject:(id)arg1 typeNamespace:(id)arg2 type:(id)arg3 tokens:(id)arg4 stringPrefix:(id)arg5 ;
@end

