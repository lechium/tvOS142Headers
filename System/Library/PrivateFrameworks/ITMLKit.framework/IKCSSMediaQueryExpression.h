/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface IKCSSMediaQueryExpression : NSObject {

	long long _type;
	NSString* _key;
	NSString* _stringValue;
	NSString* _dimension;
	NSString* _mediaType;
	double _doubleValue;

}

@property (assign) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) NSString * dimension;                //@synthesize dimension=_dimension - In the implementation block
@property (nonatomic,retain) NSString * mediaType;                //@synthesize mediaType=_mediaType - In the implementation block
@property (assign) double doubleValue;                            //@synthesize doubleValue=_doubleValue - In the implementation block
-(id)description;
-(double)doubleValue;
-(void)setType:(long long)arg1 ;
-(NSString *)stringValue;
-(long long)type;
-(NSString *)key;
-(NSString *)dimension;
-(void)setKey:(NSString *)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(BOOL)evaluate;
-(id)valueAsString;
-(id)expressionAsString;
-(void)setDimension:(NSString *)arg1 ;
@end

