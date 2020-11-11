/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class NSNumberFormatter, NSMutableCharacterSet;

@interface GEORisonParser : NSObject {

	NSNumberFormatter* _formatter;
	NSMutableCharacterSet* _risonTerminators;
	NSMutableCharacterSet* _risonEscapes;

}
-(id)init;
-(id)stringFromNumber:(id)arg1 ;
-(id)stringFromRisonObject:(id)arg1 ;
-(id)objectFromRisonString:(id)arg1 ;
-(id)objectWithReaderInfo:(SCD_Struct_GE229*)arg1 ;
-(id)dictionaryWithReaderInfo:(SCD_Struct_GE229*)arg1 ;
-(id)stringLiteralWithReaderInfo:(SCD_Struct_GE229*)arg1 ;
-(id)arrayWithReaderInfo:(SCD_Struct_GE229*)arg1 ;
-(id)boolWithReaderInfo:(SCD_Struct_GE229*)arg1 ;
-(id)nullWithReaderInfo:(SCD_Struct_GE229*)arg1 ;
-(id)numberWithReaderInfo:(SCD_Struct_GE229*)arg1 ;
-(id)keyWithReaderInfo:(SCD_Struct_GE229*)arg1 ;
-(id)stringFromDictionary:(id)arg1 ;
-(id)stringFromArray:(id)arg1 ;
-(id)stringFromNull:(id)arg1 ;
-(id)stringFromString:(id)arg1 ;
@end

