/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, RBSAttribute;

@interface RBAttributeTemplate : NSObject {

	NSString* _className;
	RBSAttribute* _attribute;

}

@property (nonatomic,retain) NSString * className;                  //@synthesize className=_className - In the implementation block
@property (nonatomic,retain) RBSAttribute * attribute;              //@synthesize attribute=_attribute - In the implementation block
-(id)description;
-(RBSAttribute *)attribute;
-(NSString *)className;
-(void)setAttribute:(RBSAttribute *)arg1 ;
-(void)setClassName:(NSString *)arg1 ;
@end

