/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, IKViewElementStyleComposer;


@protocol IKStyleableElement <NSObject>
@property (nonatomic,__weak,readonly) id<IKStyleableElement> parentStyleableElement; 
@property (nonatomic,copy,readonly) NSString * elementName; 
@property (nonatomic,retain) IKViewElementStyleComposer * styleComposer; 
@required
-(id)objectForKeyedSubscript:(id)arg1;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
-(NSString *)elementName;
-(id<IKStyleableElement>)parentStyleableElement;
-(IKViewElementStyleComposer *)styleComposer;
-(void)setStyleComposer:(id)arg1;

@end
