#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Components/SceneComponent.h"
#include "HbkCharacterShadowSpotLightTargetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkCharacterShadowSpotLightTargetComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CharacterShadowTableRowHandle;
    
public:
    UHbkCharacterShadowSpotLightTargetComponent(const FObjectInitializer& ObjectInitializer);

};

