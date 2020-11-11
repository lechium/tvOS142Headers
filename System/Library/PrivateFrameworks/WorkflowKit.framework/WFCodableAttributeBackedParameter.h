/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INCodableAttribute, INStringLocalizer;


@protocol WFCodableAttributeBackedParameter <NSObject>
@property (nonatomic,retain) INCodableAttribute * codableAttribute; 
@property (nonatomic,retain) INStringLocalizer * stringLocalizer; 
@required
-(INCodableAttribute *)codableAttribute;
-(INStringLocalizer *)stringLocalizer;
-(void)setStringLocalizer:(id)arg1;
-(void)setCodableAttribute:(id)arg1;

@end

