//
//  AppDelegate.h
//  TEST_JSON
//
//  Created by Мария Водолазкая on 26.07.15.
//  Copyright (c) 2015 Мария Водолазкая. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "GMServerManager.h"

extern NSString * const WCFNetworkError;
extern NSString * const NOTIFY_LoadedStudentsData;
extern NSString * const NOTIFY_DataUpdated;
extern NSString * const NOTIFY_LoadedGroupsData;
extern NSString * const NOTIFY_GroupHasBeenSelected;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, strong) GMServerManager *server;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

