/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface CNAccountsAndGroupsItem : NSObject {

	BOOL _selected;
	BOOL _bypassIfUnique;
	BOOL _soloSelect;
	NSString* _name;
	/*^block*/id _nameProvider;
	NSString* _identifier;
	long long _containerType;
	NSArray* _childItems;
	CNAccountsAndGroupsItem* _parentItem;
	long long _type;

}

@property (nonatomic,retain) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id nameProvider;                                            //@synthesize nameProvider=_nameProvider - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long containerType;                                  //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,retain) NSArray * childItems;                                     //@synthesize childItems=_childItems - In the implementation block
@property (assign,nonatomic,__weak) CNAccountsAndGroupsItem * parentItem;              //@synthesize parentItem=_parentItem - In the implementation block
@property (assign,nonatomic) BOOL bypassIfUnique;                                      //@synthesize bypassIfUnique=_bypassIfUnique - In the implementation block
@property (assign,nonatomic) BOOL soloSelect;                                          //@synthesize soloSelect=_soloSelect - In the implementation block
@property (nonatomic,readonly) long long type;                                         //@synthesize type=_type - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                          //@synthesize selected=_selected - In the implementation block
-(NSString *)name;
-(long long)type;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithType:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)localizedCompare:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(NSArray *)childItems;
-(void)setChildItems:(NSArray *)arg1 ;
-(long long)containerType;
-(void)setContainerType:(long long)arg1 ;
-(void)setParentItem:(CNAccountsAndGroupsItem *)arg1 ;
-(void)_setSelected:(BOOL)arg1 ;
-(BOOL)soloSelect;
-(BOOL)bypassIfUnique;
-(id)arrayForDisplay:(BOOL)arg1 ;
-(id)nameProvider;
-(void)setNameProvider:(id)arg1 ;
-(CNAccountsAndGroupsItem *)parentItem;
-(void)setBypassIfUnique:(BOOL)arg1 ;
-(void)setSoloSelect:(BOOL)arg1 ;
@end

