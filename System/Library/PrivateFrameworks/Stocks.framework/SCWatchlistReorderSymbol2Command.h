/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SCKZoneCommand.h>

@class NSString;

@interface SCWatchlistReorderSymbol2Command : NSObject <SCKZoneCommand> {

	NSString* _symbol;
	unsigned long long _toIndex;

}

@property (nonatomic,copy,readonly) NSString * symbol;                  //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,readonly) unsigned long long toIndex;              //@synthesize toIndex=_toIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)symbol;
-(unsigned long long)toIndex;
-(id)initWithSymbol:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)executeWithZone:(id)arg1 ;
@end

