/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSValueTransformer.h>

@interface _IFValueTransformer : NSValueTransformer {

	/*^block*/id _forwardTransformation;
	/*^block*/id _reverseTransformation;

}

@property (nonatomic,copy,readonly) id forwardTransformation;              //@synthesize forwardTransformation=_forwardTransformation - In the implementation block
@property (nonatomic,copy,readonly) id reverseTransformation;              //@synthesize reverseTransformation=_reverseTransformation - In the implementation block
+(BOOL)allowsReverseTransformation;
-(id)transformedValue:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)initWithForwardTransformation:(/*^block*/id)arg1 reverseTransformation:(/*^block*/id)arg2 ;
-(id)forwardTransformation;
-(id)reverseTransformation;
@end

