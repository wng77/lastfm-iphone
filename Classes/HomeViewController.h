//
//  HomeViewController.h
//  MobileLastFM
//
//  Created by Sam Steele on 11/17/10.
//  Copyright 2010 Last.fm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ProfileViewController.h"
#import "EventsTabViewController.h"
#import "RadioListViewController.h"
#import "FriendsViewController.h"

@interface HomeViewController : UIViewController<UITabBarDelegate> {
	IBOutlet UIView *_contentView;
	IBOutlet UITabBar *_tabBar;
	
	ProfileViewController *_profileController;
	//RecsViewController *recs;
	EventsTabViewController *_eventsController;
	RadioListViewController *_radioController;
	FriendsViewController *_friendsController;
	NSString *_username;
}
-(id)initWithUsername:(NSString *)user;
-(void)tabBar:(UITabBar *)tabBar didSelectItem:(UITabBarItem *)item;

@end