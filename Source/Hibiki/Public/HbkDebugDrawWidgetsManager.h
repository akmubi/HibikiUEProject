#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TngGameSystem.h"
#include "HbkDebugDrawWidgetsManager.generated.h"

class AHbkEnemyCharacter;
class AHbkPlayerController;
class UHbkDebugLifeWidget;
class UHbkDebugVisibleDamageWidget;

UCLASS(Blueprintable)
class HIBIKI_API UHbkDebugDrawWidgetsManager : public UTngGameSystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkPlayerController> PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkDebugLifeWidget> DebugLifeWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkDebugVisibleDamageWidget> DebugVisibleDamageWidgetClass;
    
public:
    UHbkDebugDrawWidgetsManager();

protected:
    UFUNCTION(BlueprintCallable)
    void PlayerRespawnNotify();
    
    UFUNCTION(BlueprintCallable)
    void PlayerDeadNotify();
    
    UFUNCTION(BlueprintCallable)
    void EnemySpawnNotify(AHbkEnemyCharacter* SpawnEnemy);
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugLifePlayer();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugLifeEnemy();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugLifeAndDamagePlayer();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugLifeAndDamageEnemy();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugLifeAndDamageAll();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugLifeAll();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugDamagePlayer();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugDamageEnemy();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugDamageAll();
    
};

