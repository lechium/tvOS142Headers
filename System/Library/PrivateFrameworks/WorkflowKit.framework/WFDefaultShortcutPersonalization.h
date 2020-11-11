/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WFDefaultShortcutPersonalizationContext;

@interface WFDefaultShortcutPersonalization : NSObject {

	WFDefaultShortcutPersonalizationContext* _context;

}

@property (nonatomic,readonly) WFDefaultShortcutPersonalizationContext * context;              //@synthesize context=_context - In the implementation block
-(WFDefaultShortcutPersonalizationContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)generateDefaultShortcutsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)personalizeDefaultShortcuts:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

