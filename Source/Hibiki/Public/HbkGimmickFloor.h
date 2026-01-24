#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmickFloor.generated.h"

class AActor;
class UBoxComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmickFloor : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    AHbkGimmickFloor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSyncPrepare();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorOnFloor();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActorOnFloor();
    
};

