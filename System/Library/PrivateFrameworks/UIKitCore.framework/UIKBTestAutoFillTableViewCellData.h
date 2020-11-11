/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@class UITableViewCell;

@interface UIKBTestAutoFillTableViewCellData : NSObject <NSCoding> {

	UITableViewCell* _cell;
	double _height;

}

@property (nonatomic,readonly) UITableViewCell * cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) double height;                       //@synthesize height=_height - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)height;
-(UITableViewCell *)cell;
-(id)initWithCell:(id)arg1 height:(double)arg2 ;
@end

