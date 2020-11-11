/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ICSTokenizer, NSData;

@interface ICSParser : NSObject {

	unsigned long long _options;
	ICSTokenizer* _lexer;
	NSData* _data;

}

@property (nonatomic,readonly) ICSTokenizer * lexer;              //@synthesize lexer=_lexer - In the implementation block
+(id)entitiesFromNSData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithData:(id)arg1 options:(unsigned long long)arg2 ;
-(void)parseParameter:(id)arg1 ;
-(BOOL)createPropertyType:(int)arg1 component:(id)arg2 withName:(id)arg3 ;
-(void)_parseComponent:(id)arg1 depth:(unsigned long long)arg2 fatalError:(BOOL*)arg3 ;
-(id)makeComponent:(const char*)arg1 ;
-(BOOL)parseProperty:(id)arg1 ;
-(void)_parseComponent:(id)arg1 ;
-(id)parseData;
-(ICSTokenizer *)lexer;
@end

