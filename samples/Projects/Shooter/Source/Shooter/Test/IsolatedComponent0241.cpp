
#include "IsolatedComponent0241.h"

UIsolatedComponent0241::UIsolatedComponent0241()
{
	PrimaryComponentTick.bCanEverTick = true;   
	MovementRadius = 0.0f;
}

void UIsolatedComponent0241::BeginPlay()       
{
	Super::BeginPlay();      

	AActor* Parent = GetOwner();          
	if (Parent)       
	{
		Parent->SetActorLocation(Parent->GetActorLocation());
	}  
	MovementRadius = 1.0f;   
}

void UIsolatedComponent0241::Gurke()    
{         
	//UE_LOG(LogTemp, Warning, TEXT("C++ Hot Reload [gurke]: %f"), gurke);        
}

void UIsolatedComponent0241::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);   

	AActor* Parent = GetOwner(); 
	if (Parent)        
	{
		Parent->SetActorLocation(
			Parent->GetActorLocation() + 
			FVector( 
				FMath::FRandRange(-1, 1) * MovementRadius, 
				FMath::FRandRange(-1, 1) * MovementRadius,
				FMath::FRandRange(-1, 1) * MovementRadius));      
	}
	Gurke();          
}
