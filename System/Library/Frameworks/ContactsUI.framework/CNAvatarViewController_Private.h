/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class CNContactStore, PRPersonaStore;


@protocol CNAvatarViewController_Private <NSObject>
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) PRPersonaStore * personaStore; 
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled; 
@required
-(CNContactStore *)contactStore;
-(void)setThreeDTouchEnabled:(BOOL)arg1;
-(BOOL)isThreeDTouchEnabled;
-(PRPersonaStore *)personaStore;

@end

