/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSEditableListController.h>

@interface PSUsageBundleDetailController : PSEditableListController
+(void)setupSpecifier:(id)arg1 forMediaGroups:(id)arg2 ;
+(id)mediaGroups;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(id)specifiers;
-(BOOL)canBeShownFromSuspendedState;
-(void)updateSizesAfterDeletingSize:(float)arg1 shouldPop:(BOOL)arg2 ;
-(id)sizeForSpecifier:(id)arg1 ;
-(id)size:(id)arg1 ;
@end
