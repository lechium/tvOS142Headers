/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface UICellAccessoryConfiguration : NSObject {

	BOOL _leadingAlwaysNeedsLayout;
	BOOL _trailingAlwaysNeedsLayout;
	NSArray* _leadingAccessories;
	NSArray* _trailingAccessories;

}

@property (nonatomic,copy) NSArray * leadingAccessories;               //@synthesize leadingAccessories=_leadingAccessories - In the implementation block
@property (nonatomic,copy) NSArray * trailingAccessories;              //@synthesize trailingAccessories=_trailingAccessories - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)setLeadingAccessories:(NSArray *)arg1 ;
-(void)setTrailingAccessories:(NSArray *)arg1 ;
-(NSArray *)leadingAccessories;
-(NSArray *)trailingAccessories;
-(BOOL)alwaysNeedsLayout;
@end

