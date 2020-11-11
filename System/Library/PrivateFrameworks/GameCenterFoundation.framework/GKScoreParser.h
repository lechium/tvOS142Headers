/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableString, NSMutableArray;

@interface GKScoreParser : NSObject {

	BOOL _error;
	NSMutableString* _prefix;
	NSMutableString* _suffix;
	NSMutableArray* _numericSeparators;
	long long _colonCount;
	long long _precision;

}

@property (nonatomic,retain) NSMutableString * prefix;                        //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,retain) NSMutableString * suffix;                        //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,retain) NSMutableArray * numericSeparators;              //@synthesize numericSeparators=_numericSeparators - In the implementation block
@property (assign,nonatomic) long long colonCount;                            //@synthesize colonCount=_colonCount - In the implementation block
@property (assign,nonatomic) long long precision;                             //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) BOOL error;                                      //@synthesize error=_error - In the implementation block
+(id)formattedDifferenceBetweenFirstScore:(id)arg1 secondScore:(id)arg2 ;
-(BOOL)error;
-(void)setError:(BOOL)arg1 ;
-(long long)precision;
-(NSMutableString *)prefix;
-(void)setPrefix:(NSMutableString *)arg1 ;
-(void)setSuffix:(NSMutableString *)arg1 ;
-(NSMutableString *)suffix;
-(void)setPrecision:(long long)arg1 ;
-(void)setNumericSeparators:(NSMutableArray *)arg1 ;
-(long long)colonCount;
-(void)setColonCount:(long long)arg1 ;
-(NSMutableArray *)numericSeparators;
-(void)parseScore:(id)arg1 ;
@end

