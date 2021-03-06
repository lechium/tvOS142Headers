/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/_HKCFGTerminal.h>

@class NSCharacterSet;

@interface _HKCFGCharacterSequenceTerminal : _HKCFGTerminal {

	NSCharacterSet* _characterSet;

}

@property (nonatomic,copy) NSCharacterSet * characterSet;              //@synthesize characterSet=_characterSet - In the implementation block
-(id)_label;
-(NSCharacterSet *)characterSet;
-(void)setCharacterSet:(NSCharacterSet *)arg1 ;
-(unsigned long long)_minimumLength;
-(BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
@end

