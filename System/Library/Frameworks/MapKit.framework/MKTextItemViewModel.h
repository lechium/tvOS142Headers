/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface MKTextItemViewModel : NSObject {

	NSArray* _values;

}

@property (nonatomic,copy) NSArray * values;              //@synthesize values=_values - In the implementation block
-(NSArray *)values;
-(void)setValues:(NSArray *)arg1 ;
-(unsigned long long)numberOfRows;
-(id)initWithTextItemContainer:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 maxWidth:(double)arg4 ;
-(id)stringsForRowAtIndex:(unsigned long long)arg1 ;
@end
